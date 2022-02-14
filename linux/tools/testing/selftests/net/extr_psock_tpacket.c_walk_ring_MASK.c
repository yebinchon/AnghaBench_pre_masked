
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring {int (* walk ) (int,struct ring*) ;} ;


 int FUNC_0 (int,struct ring*) ;

__attribute__((used)) static void FUNC_1(int VAR_0, struct ring *VAR_1)
{
 VAR_1->walk(VAR_0, VAR_1);
}
