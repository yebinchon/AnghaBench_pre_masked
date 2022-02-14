
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct machine {int dummy; } ;
struct TYPE_2__ {scalar_t__ eh_frame_hdr_offset; } ;
struct dso {TYPE_1__ data; } ;


 int VAR_0 ;
 int FUNC_0 (struct dso*,struct machine*) ;
 int FUNC_1 (struct dso*) ;
 scalar_t__ FUNC_2 (int,char*) ;
 int FUNC_3 (struct dso*,struct machine*,scalar_t__,scalar_t__*,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static int FUNC_4(struct dso *VAR_1, struct machine *VAR_2,
         u64 *VAR_3, u64 *VAR_4,
         u64 *VAR_5)
{
 int VAR_6 = -VAR_0, VAR_7;
 u64 VAR_8 = VAR_1->data.eh_frame_hdr_offset;

 if (VAR_8 == 0) {
  VAR_7 = FUNC_0(VAR_1, VAR_2);
  if (VAR_7 < 0)
   return -VAR_0;


  VAR_8 = FUNC_2(VAR_7, ".eh_frame_hdr");
  VAR_1->data.eh_frame_hdr_offset = VAR_8;
  FUNC_1(VAR_1);
 }

 if (VAR_8)
  VAR_6 = FUNC_3(VAR_1, VAR_2, VAR_8,
       VAR_3, VAR_4,
       VAR_5);

 return VAR_6;
}
