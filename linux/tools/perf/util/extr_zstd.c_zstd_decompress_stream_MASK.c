
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct zstd_data {int dstream; } ;
struct TYPE_5__ {void* member_0; size_t member_1; int size; int pos; void* dst; int member_2; } ;
typedef TYPE_1__ ZSTD_outBuffer ;
struct TYPE_6__ {void* member_0; size_t member_1; scalar_t__ pos; scalar_t__ size; int member_2; } ;
typedef TYPE_2__ ZSTD_inBuffer ;


 size_t FUNC_0 (int ,TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (size_t) ;
 int FUNC_3 (char*,size_t,int,size_t,int ) ;

size_t FUNC_4(struct zstd_data *VAR_0, void *VAR_1, size_t VAR_2,
         void *VAR_3, size_t VAR_4)
{
 size_t VAR_5;
 ZSTD_inBuffer VAR_6 = { VAR_1, VAR_2, 0 };
 ZSTD_outBuffer VAR_7 = { VAR_3, VAR_4, 0 };

 while (VAR_6.pos < VAR_6.size) {
  VAR_5 = FUNC_0(VAR_0->dstream, &VAR_7, &VAR_6);
  if (FUNC_2(VAR_5)) {
   FUNC_3("failed to decompress (B): %ld -> %ld, dst_size %ld : %s\n",
          VAR_2, VAR_7.size, VAR_4, FUNC_1(VAR_5));
   break;
  }
  VAR_7.dst = VAR_3 + VAR_7.pos;
  VAR_7.size = VAR_4 - VAR_7.pos;
 }

 return VAR_7.pos;
}
