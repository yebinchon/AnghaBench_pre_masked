
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UErrorCode ;
struct TYPE_6__ {int current; int currentkey; scalar_t__ is_table; int i; TYPE_1__* subject; } ;
struct TYPE_5__ {int child; int me; } ;
typedef TYPE_1__ ResourceBundle_object ;
typedef TYPE_2__ ResourceBundle_iterator ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int ,int ,int ,int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6( ResourceBundle_iterator *VAR_1 )
{
 UErrorCode VAR_2 = VAR_0;
 ResourceBundle_object *VAR_3 = VAR_1->subject;

 VAR_3->child = FUNC_4( VAR_3->me, VAR_1->i, VAR_3->child, &VAR_2 );

 if (FUNC_0(VAR_2)) {

  if (VAR_1->is_table) {
   VAR_1->currentkey = FUNC_2( FUNC_5( VAR_3->child ) );
  }
  FUNC_3( &VAR_1->current, VAR_3 );
 }
 else {

  FUNC_1(&VAR_1->current);
 }
}
