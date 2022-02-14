
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ scale; int* bitsnum; scalar_t__ sign; } ;
typedef TYPE_1__ VARIANT_DI ;
typedef int ULONGLONG ;
typedef scalar_t__ HRESULT ;
typedef int DECIMAL ;
typedef int BOOL ;


 unsigned int FUNC_0 (int*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int const*,TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 unsigned char FUNC_4 (int*,unsigned int,int) ;
 int FUNC_5 (int*,unsigned int) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static HRESULT FUNC_7(const DECIMAL *VAR_2, const DECIMAL *VAR_3, DECIMAL *VAR_4,
        BOOL VAR_5)
{
  HRESULT VAR_6 = VAR_1;
  VARIANT_DI VAR_7, VAR_8, VAR_9;
  HRESULT VAR_10;

  FUNC_1(VAR_2, &VAR_7);
  FUNC_1(VAR_3, &VAR_8);
  VAR_10 = FUNC_2(&VAR_7, &VAR_8, &VAR_9, VAR_5);
  if (VAR_10 != VAR_1)
  {

      VAR_6 = VAR_10;
  }
  else
  {
      VAR_6 = VAR_1;

      if (VAR_9.scale > VAR_0)
      {
        unsigned char VAR_11 = 0;





        FUNC_6("result scale is %u, scaling (with loss of significant digits)...\n",
            VAR_9.scale);
        while (VAR_9.scale > VAR_0 &&
               !FUNC_5(VAR_9.bitsnum, FUNC_0(VAR_9.bitsnum)))
        {
            VAR_11 = FUNC_4(VAR_9.bitsnum, FUNC_0(VAR_9.bitsnum), 10);
            VAR_9.scale--;
        }
        if (VAR_9.scale > VAR_0)
        {
            FUNC_6("result underflowed, setting to 0\n");
            VAR_9.scale = 0;
            VAR_9.sign = 0;
        }
        else if (VAR_11 >= 5)
        {
            unsigned int VAR_12;
            for (VAR_11 = 1, VAR_12 = 0; VAR_12 < FUNC_0(VAR_9.bitsnum) && VAR_11; VAR_12++) {
                ULONGLONG VAR_13 = VAR_9.bitsnum[VAR_12] + 1;
                VAR_11 = (VAR_13 > 0xFFFFFFFF) ? 1 : 0;
                VAR_9.bitsnum[VAR_12] = VAR_13 & 0xFFFFFFFF;
            }
        }
      }
      FUNC_3(&VAR_9, VAR_4);
  }
  return VAR_6;
}
