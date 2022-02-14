
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct keyval {TYPE_1__* k; } ;
struct TYPE_5__ {char* n; } ;
struct TYPE_4__ {scalar_t__ kind; } ;


 TYPE_2__* FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 char** VAR_2 ;
 int FUNC_1 (char const*,char const*) ;

__attribute__((used)) static int FUNC_2(const void *VAR_3, const void *VAR_4)
{
 const struct keyval *VAR_5 = VAR_3;
 const struct keyval *VAR_6 = VAR_4;
 const char *VAR_7;
 const char *VAR_8;



 if (VAR_5->k < VAR_0)
  VAR_7 = VAR_2[(intptr_t)VAR_5->k];
 else if (VAR_5->k >= VAR_0 && VAR_5->k->kind == VAR_1)
  VAR_7 = FUNC_0(VAR_5->k)->n;
 else
  return 0;

 if (VAR_6->k < VAR_0)
  VAR_8 = VAR_2[(intptr_t)VAR_6->k];
 else if (VAR_6->k >= VAR_0 && VAR_6->k->kind == VAR_1)
  VAR_8 = FUNC_0(VAR_6->k)->n;
 else
  return 0;

 return FUNC_1(VAR_7, VAR_8);
}
