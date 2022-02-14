
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tilegx_spr {int number; char const* name; } ;


 void* FUNC_0 (void const*,void const*,int ,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

const char *
FUNC_1 (int VAR_3)
{
  void *VAR_4;
  struct tilegx_spr VAR_5;

  VAR_5.number = VAR_3;
  VAR_4 = FUNC_0((const void *) &VAR_5, (const void *) VAR_2,
                   VAR_0, sizeof (struct tilegx_spr),
                   VAR_1);

  if (VAR_4 == ((void*)0))
  {
    return (((void*)0));
  }
  else
  {
    struct tilegx_spr *VAR_6 = (struct tilegx_spr *) VAR_4;
    return (VAR_6->name);
  }
}
