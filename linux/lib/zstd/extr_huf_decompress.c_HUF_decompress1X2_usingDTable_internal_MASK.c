
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_3__ {int tableLog; } ;
typedef int HUF_DTable ;
typedef int HUF_DEltX2 ;
typedef TYPE_1__ DTableDesc ;
typedef int BYTE ;
typedef int BIT_DStream_t ;


 int FUNC_0 (int *) ;
 size_t FUNC_1 (int *,void const*,size_t) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,int * const,int const* const,int const) ;
 TYPE_1__ FUNC_4 (int const*) ;
 scalar_t__ FUNC_5 (size_t const) ;
 int VAR_0 ;

__attribute__((used)) static size_t FUNC_6(void *VAR_1, size_t VAR_2, const void *VAR_3, size_t VAR_4, const HUF_DTable *VAR_5)
{
 BYTE *VAR_6 = (BYTE *)VAR_1;
 BYTE *const VAR_7 = VAR_6 + VAR_2;
 const void *VAR_8 = VAR_5 + 1;
 const HUF_DEltX2 *const VAR_9 = (const HUF_DEltX2 *)VAR_8;
 BIT_DStream_t VAR_10;
 DTableDesc const VAR_11 = FUNC_4(VAR_5);
 U32 const VAR_12 = VAR_11.tableLog;

 {
  size_t const VAR_13 = FUNC_1(&VAR_10, VAR_3, VAR_4);
  if (FUNC_5(VAR_13))
   return VAR_13;
 }

 FUNC_3(VAR_6, &VAR_10, VAR_7, VAR_9, VAR_12);


 if (!FUNC_0(&VAR_10))
  return FUNC_2(VAR_0);

 return VAR_2;
}
