
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t tex; float y; float spinz; float flap; float fi; scalar_t__ spinzi; scalar_t__ yi; int z; int x; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (float,float,float,float) ;
 int FUNC_9 (float,float) ;
 int FUNC_10 (int ,float,int ) ;
 int FUNC_11 (float,float,float) ;
 TYPE_1__* VAR_5 ;
 int * VAR_6 ;

void FUNC_12()
{
    int VAR_7;
 FUNC_4 (VAR_0 | VAR_1);

 for (VAR_7=0; VAR_7<50; VAR_7++)
 {
  FUNC_7 ();
  FUNC_3(VAR_2, VAR_6[VAR_5[VAR_7].tex]);
  FUNC_10(VAR_5[VAR_7].x,VAR_5[VAR_7].y,VAR_5[VAR_7].z);
  FUNC_8(45.0f,1.0f,0.0f,0.0f);
  if (VAR_4)
  {
   FUNC_8((VAR_5[VAR_7].spinz),0.0f,0.0f,1.0f);
  }
  FUNC_2(VAR_3);

   FUNC_9(1.0f,1.0f); FUNC_11( 1.0f, 1.0f, 0.0f);
   FUNC_9(0.0f,1.0f); FUNC_11(-1.0f, 1.0f, VAR_5[VAR_7].flap);
   FUNC_9(0.0f,0.0f); FUNC_11(-1.0f,-1.0f, 0.0f);


   FUNC_9(1.0f,1.0f); FUNC_11( 1.0f, 1.0f, 0.0f);
   FUNC_9(0.0f,0.0f); FUNC_11(-1.0f,-1.0f, 0.0f);
   FUNC_9(1.0f,0.0f); FUNC_11( 1.0f,-1.0f, VAR_5[VAR_7].flap);

  FUNC_5();

  VAR_5[VAR_7].y-=VAR_5[VAR_7].yi;
  VAR_5[VAR_7].spinz+=VAR_5[VAR_7].spinzi;
  VAR_5[VAR_7].flap+=VAR_5[VAR_7].fi;

  if (VAR_5[VAR_7].y<-18.0f)
  {
   FUNC_0(VAR_7);
  }

  if ((VAR_5[VAR_7].flap>1.0f) || (VAR_5[VAR_7].flap<-1.0f))
  {
   VAR_5[VAR_7].fi=-VAR_5[VAR_7].fi;
  }
 }

 FUNC_1(15);

 FUNC_6 ();

}
