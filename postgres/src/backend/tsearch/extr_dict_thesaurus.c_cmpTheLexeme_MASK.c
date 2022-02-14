
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int entries; } ;
typedef TYPE_1__ TheLexeme ;


 int FUNC_0 (TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2(const void *VAR_0, const void *VAR_1)
{
 const TheLexeme *VAR_2 = (const TheLexeme *) VAR_0;
 const TheLexeme *VAR_3 = (const TheLexeme *) VAR_1;
 int VAR_4;

 if ((VAR_4 = FUNC_0(VAR_2, VAR_3)) != 0)
  return VAR_4;

 return -FUNC_1(VAR_2->entries, VAR_3->entries);
}
