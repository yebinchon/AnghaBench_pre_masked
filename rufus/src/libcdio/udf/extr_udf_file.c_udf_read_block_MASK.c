
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_6__ {int i_position; } ;
typedef TYPE_1__ udf_t ;
struct TYPE_7__ {TYPE_1__* p_udf; } ;
typedef TYPE_2__ udf_dirent_t ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ lba_t ;
typedef scalar_t__ driver_return_code_t ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (size_t,size_t) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (size_t,size_t) ;
 size_t VAR_3 ;
 int FUNC_2 (char*,unsigned int,...) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (TYPE_2__ const*,int ,int *,size_t*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,void*,scalar_t__,size_t) ;

ssize_t
FUNC_5(const udf_dirent_t *VAR_5, void * VAR_6, size_t VAR_7)
{
  if (VAR_7 == 0) return 0;
  else {
    driver_return_code_t VAR_8;
    uint32_t VAR_9=0;
    udf_t *VAR_10 = VAR_5->p_udf;
    lba_t VAR_11 = FUNC_3(VAR_5, VAR_10->i_position, &VAR_11,
    &VAR_9);
    if (VAR_11 != VAR_0) {
      uint32_t VAR_12 = FUNC_0(VAR_9, VAR_3);
      if ( VAR_12 < VAR_7 ) {
   FUNC_2("read count %u is larger than %u extent size.",
    (unsigned int)VAR_7, VAR_12);
   FUNC_2("read count truncated to %u", (unsigned int)VAR_7);
   VAR_7 = VAR_12;
      }
      VAR_8 = FUNC_4(VAR_10, VAR_6, VAR_11, VAR_7);
      if (VAR_2 == VAR_8) {
 ssize_t VAR_13 = FUNC_1(VAR_9, VAR_7 * VAR_3);
 VAR_10->i_position += VAR_13;
 return VAR_13;
      }
      return VAR_8;
    } else {
      return VAR_1;
    }
  }
}
