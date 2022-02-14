
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {scalar_t__ tfm; } ;


 int VAR_0 ;
 char* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int *,size_t) ;
 TYPE_1__* VAR_4 ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int ,int ) ;

char *FUNC_7(void *VAR_5, size_t VAR_6)
{
 FUNC_1(VAR_4, VAR_3);
 char *VAR_7 = ((void*)0);
 int VAR_8 = -VAR_0;

 if (!VAR_3)
  return ((void*)0);

 VAR_7 = FUNC_6(VAR_2, VAR_1);
 if (!VAR_7)
  goto fail;

 VAR_4->tfm = VAR_3;

 VAR_8 = FUNC_3(VAR_4);
 if (VAR_8)
  goto fail;
 VAR_8 = FUNC_4(VAR_4, (u8 *) VAR_5, VAR_6);
 if (VAR_8)
  goto fail;
 VAR_8 = FUNC_2(VAR_4, VAR_7);
 if (VAR_8)
  goto fail;

 return VAR_7;

fail:
 FUNC_5(VAR_7);

 return FUNC_0(VAR_8);
}
