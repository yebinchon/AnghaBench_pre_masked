
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int * pages; } ;
struct iso_packets_buffer {TYPE_1__* packets; TYPE_4__ iso_buffer; } ;
struct fw_unit {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_6__ {int card; } ;
struct TYPE_5__ {unsigned int offset; void* buffer; } ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (TYPE_4__*,int ,unsigned int,int) ;
 TYPE_3__* FUNC_4 (struct fw_unit*) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (unsigned int,int,int ) ;
 void* FUNC_7 (int ) ;

int FUNC_8(struct iso_packets_buffer *VAR_4, struct fw_unit *VAR_5,
       unsigned int VAR_6, unsigned int VAR_7,
       enum dma_data_direction VAR_8)
{
 unsigned int VAR_9, VAR_10;
 unsigned int VAR_11, VAR_12, VAR_13;
 void *VAR_14;
 int VAR_15;

 VAR_4->packets = FUNC_6(VAR_6, sizeof(*VAR_4->packets), VAR_2);
 if (!VAR_4->packets) {
  VAR_15 = -VAR_1;
  goto error;
 }

 VAR_7 = FUNC_1(VAR_7);
 VAR_9 = VAR_3 / VAR_7;
 if (FUNC_2(!VAR_9)) {
  VAR_15 = -VAR_0;
  goto err_packets;
 }
 VAR_10 = FUNC_0(VAR_6, VAR_9);

 VAR_15 = FUNC_3(&VAR_4->iso_buffer, FUNC_4(VAR_5)->card,
     VAR_10, VAR_8);
 if (VAR_15 < 0)
  goto err_packets;

 for (VAR_11 = 0; VAR_11 < VAR_6; ++VAR_11) {
  VAR_12 = VAR_11 / VAR_9;
  VAR_14 = FUNC_7(VAR_4->iso_buffer.pages[VAR_12]);
  VAR_13 = (VAR_11 % VAR_9) * VAR_7;
  VAR_4->packets[VAR_11].buffer = VAR_14 + VAR_13;
  VAR_4->packets[VAR_11].offset = VAR_12 * VAR_3 + VAR_13;
 }

 return 0;

err_packets:
 FUNC_5(VAR_4->packets);
error:
 return VAR_15;
}
