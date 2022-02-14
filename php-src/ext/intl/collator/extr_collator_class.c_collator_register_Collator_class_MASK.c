
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int create_object; } ;
typedef TYPE_1__ zend_class_entry ;
struct TYPE_7__ {int free_obj; int * clone_obj; int offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__,char*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_3__*,int *,int) ;
 int VAR_7 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_8 ;

void FUNC_5( void )
{
 zend_class_entry VAR_9;


 FUNC_0( VAR_9, "Collator", VAR_1 );
 VAR_9.create_object = VAR_4;
 VAR_0 = FUNC_4( &VAR_9 );

 FUNC_2(&VAR_2, &VAR_7,
  sizeof VAR_2);


 VAR_2.offset = FUNC_1(VAR_3, VAR_8);
 VAR_2.clone_obj = ((void*)0);
 VAR_2.free_obj = VAR_5;


 if( !VAR_0 )
 {
  FUNC_3( VAR_6,
   "Collator: attempt to create properties "
   "on a non-registered class." );
  return;
 }
}
