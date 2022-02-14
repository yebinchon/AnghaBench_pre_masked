
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_14__ ;


struct TYPE_20__ {void* ReadBuffer; } ;
struct TYPE_19__ {void* DrawBuffer; } ;
struct TYPE_22__ {int Exec; int API; struct TYPE_22__* PB; struct TYPE_22__* VB; TYPE_14__* Shared; TYPE_2__ Pixel; TYPE_1__ Color; int * Buffer; TYPE_3__* Visual; void* DriverCtx; } ;
struct TYPE_21__ {scalar_t__ DBflag; } ;
struct TYPE_18__ {int RefCount; } ;
typedef TYPE_3__ GLvisual ;
typedef int GLushort ;
typedef int GLuint ;
typedef int GLubyte ;
typedef int GLshort ;
typedef int GLint ;
typedef TYPE_4__ GLcontext ;
typedef int GLbyte ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 TYPE_14__* FUNC_1 () ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,TYPE_14__*) ;
 TYPE_4__* FUNC_6 () ;
 TYPE_4__* FUNC_7 () ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (TYPE_4__*) ;

GLcontext *FUNC_14( GLvisual *VAR_2,
                              GLcontext *VAR_3,
                              void *VAR_4 )
{
   GLcontext *VAR_5;


   FUNC_2( sizeof(GLbyte) == 1 );
   FUNC_2( sizeof(GLshort) >= 2 );
   FUNC_2( sizeof(GLint) >= 4 );
   FUNC_2( sizeof(GLubyte) == 1 );
   FUNC_2( sizeof(GLushort) >= 2 );
   FUNC_2( sizeof(GLuint) >= 4 );


   FUNC_11();
   FUNC_10();
   FUNC_9();

   VAR_5 = (GLcontext *) FUNC_3( 1, sizeof(GLcontext) );
   if (!VAR_5) {
      return ((void*)0);
   }

   VAR_5->DriverCtx = VAR_4;
   VAR_5->Visual = VAR_2;
   VAR_5->Buffer = ((void*)0);

   VAR_5->VB = FUNC_7();
   if (!VAR_5->VB) {
      FUNC_4( VAR_5 );
      return ((void*)0);
   }

   VAR_5->PB = FUNC_6();
   if (!VAR_5->PB) {
      FUNC_4( VAR_5->VB );
      FUNC_4( VAR_5 );
      return ((void*)0);
   }

   if (VAR_3) {

      VAR_5->Shared = VAR_3->Shared;
   }
   else {

      VAR_5->Shared = FUNC_1();
      if (!VAR_5->Shared) {
         FUNC_4(VAR_5->VB);
         FUNC_4(VAR_5->PB);
         FUNC_4(VAR_5);
         return ((void*)0);
      }
   }
   VAR_5->Shared->RefCount++;

   FUNC_13( VAR_5 );

   if (VAR_2->DBflag) {
      VAR_5->Color.DrawBuffer = VAR_0;
      VAR_5->Pixel.ReadBuffer = VAR_0;
   }
   else {
      VAR_5->Color.DrawBuffer = VAR_1;
      VAR_5->Pixel.ReadBuffer = VAR_1;
   }
   FUNC_8( VAR_5 );
   VAR_5->API = VAR_5->Exec;

   return VAR_5;
}
