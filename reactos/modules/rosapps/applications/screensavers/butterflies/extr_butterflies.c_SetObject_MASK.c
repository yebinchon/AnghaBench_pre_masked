
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tex; int x; float y; int z; int spinzi; float flap; float fi; float yi; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 () ;

void FUNC_1(int VAR_1)
{
 VAR_0[VAR_1].tex=FUNC_0()%3;
 VAR_0[VAR_1].x=FUNC_0()%34-17.0f;
 VAR_0[VAR_1].y=18.0f;
 VAR_0[VAR_1].z=-((FUNC_0()%30000/1000.0f)+10.0f);
 VAR_0[VAR_1].spinzi=(FUNC_0()%10000)/5000.0f-1.0f;
 VAR_0[VAR_1].flap=0.0f;
 VAR_0[VAR_1].fi=0.05f+(FUNC_0()%100)/1000.0f;
 VAR_0[VAR_1].yi=0.001f+(FUNC_0()%1000)/10000.0f;
}
