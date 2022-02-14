
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ length; int * value; } ;
typedef TYPE_1__ gss_buffer_desc ;
typedef scalar_t__ OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__*,scalar_t__,int,int ,scalar_t__*,TYPE_1__*) ;
 int FUNC_3 (scalar_t__*,TYPE_1__*) ;
 int FUNC_4 (char*,int *,size_t) ;

__attribute__((used)) static void
FUNC_5(char *VAR_2, size_t VAR_3, OM_uint32 VAR_4, int VAR_5)
{
 gss_buffer_desc VAR_6;
 size_t VAR_7 = 0;
 OM_uint32 VAR_8,
    VAR_9 = 0;

 VAR_6.value = ((void*)0);
 VAR_6.length = 0;

 do
 {
  FUNC_2(&VAR_8, VAR_4, VAR_5,
         VAR_0, &VAR_9, &VAR_6);
  FUNC_4(VAR_2 + VAR_7, VAR_6.value, VAR_3 - VAR_7);
  VAR_7 += VAR_6.length;
  FUNC_3(&VAR_8, &VAR_6);
 }
 while (VAR_9 && VAR_7 < VAR_3);

 if (VAR_9 || VAR_7 == VAR_3)
  FUNC_0(VAR_1,
    (FUNC_1("incomplete GSS error report")));
}
