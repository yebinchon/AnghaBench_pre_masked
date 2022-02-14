
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {struct TYPE_9__* Sym; } ;
struct TYPE_8__ {int fHead; int vHead; int eHead; } ;
typedef int GLUvertex ;
typedef TYPE_1__ GLUmesh ;
typedef TYPE_2__ GLUhalfEdge ;
typedef int GLUface ;


 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_2__*,int *) ;
 int FUNC_2 (int *,TYPE_2__*,int *) ;
 int * FUNC_3 () ;
 int * FUNC_4 () ;
 int FUNC_5 (int *) ;

GLUhalfEdge *FUNC_6( GLUmesh *VAR_0 )
{
  GLUvertex *VAR_1= FUNC_4();
  GLUvertex *VAR_2= FUNC_4();
  GLUface *VAR_3= FUNC_3();
  GLUhalfEdge *VAR_4;


  if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == ((void*)0)) {
     if (VAR_1 != ((void*)0)) FUNC_5(VAR_1);
     if (VAR_2 != ((void*)0)) FUNC_5(VAR_2);
     if (VAR_3 != ((void*)0)) FUNC_5(VAR_3);
     return ((void*)0);
  }

  VAR_4 = FUNC_0( &VAR_0->eHead );
  if (VAR_4 == ((void*)0)) {
     FUNC_5(VAR_1);
     FUNC_5(VAR_2);
     FUNC_5(VAR_3);
     return ((void*)0);
  }

  FUNC_2( VAR_1, VAR_4, &VAR_0->vHead );
  FUNC_2( VAR_2, VAR_4->Sym, &VAR_0->vHead );
  FUNC_1( VAR_3, VAR_4, &VAR_0->fHead );
  return VAR_4;
}
