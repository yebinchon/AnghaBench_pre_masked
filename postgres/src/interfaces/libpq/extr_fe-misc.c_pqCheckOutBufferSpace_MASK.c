
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int outBufSize; char* outBuffer; int errorMessage; } ;
typedef TYPE_1__ PGconn ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 char* FUNC_1 (char*,int) ;

int
FUNC_2(size_t VAR_1, PGconn *VAR_2)
{
 int VAR_3 = VAR_2->outBufSize;
 char *VAR_4;


 if (VAR_1 <= (size_t) VAR_3)
  return 0;
 do
 {
  VAR_3 *= 2;
 } while (VAR_3 > 0 && VAR_1 > (size_t) VAR_3);

 if (VAR_3 > 0 && VAR_1 <= (size_t) VAR_3)
 {
  VAR_4 = FUNC_1(VAR_2->outBuffer, VAR_3);
  if (VAR_4)
  {

   VAR_2->outBuffer = VAR_4;
   VAR_2->outBufSize = VAR_3;
   return 0;
  }
 }

 VAR_3 = VAR_2->outBufSize;
 do
 {
  VAR_3 += 8192;
 } while (VAR_3 > 0 && VAR_1 > (size_t) VAR_3);

 if (VAR_3 > 0 && VAR_1 <= (size_t) VAR_3)
 {
  VAR_4 = FUNC_1(VAR_2->outBuffer, VAR_3);
  if (VAR_4)
  {

   VAR_2->outBuffer = VAR_4;
   VAR_2->outBufSize = VAR_3;
   return 0;
  }
 }


 FUNC_0(&VAR_2->errorMessage,
       "cannot allocate memory for output buffer\n");
 return VAR_0;
}
