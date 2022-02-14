
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cdio; int stream; scalar_t__ b_stream; } ;
typedef TYPE_1__ udf_t ;
typedef int off_t ;
typedef scalar_t__ lsn_t ;
typedef scalar_t__ driver_return_code_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,void*,scalar_t__,int,long) ;
 long FUNC_1 (int ,void*,int,long) ;
 scalar_t__ FUNC_2 (int ,int,int ) ;
 int FUNC_3 (char*) ;

driver_return_code_t
FUNC_4 (const udf_t *VAR_5, void *VAR_6, lsn_t VAR_7,
   long VAR_8)
{
  driver_return_code_t VAR_9;
  long VAR_10;
  off_t VAR_11;

  if (!VAR_5) return 0;

  VAR_11 = ((off_t)VAR_7) * VAR_4;

  if (VAR_11 < 0) {
    if (sizeof(off_t) <= 4)
      FUNC_3("Large File Support is required to access streams of 2 GB or more");
    return VAR_0;
  }

  if (VAR_5->b_stream) {
    VAR_9 = FUNC_2 (VAR_5->stream, VAR_11, VAR_3);
    if (VAR_2 != VAR_9) return VAR_9;
    VAR_10 = FUNC_1 (VAR_5->stream, VAR_6, VAR_4, VAR_8);
    if (VAR_10) return VAR_2;
    return VAR_1;
  } else {
    return FUNC_0(VAR_5->cdio, VAR_6, VAR_7, VAR_4,
      VAR_8);
  }
}
