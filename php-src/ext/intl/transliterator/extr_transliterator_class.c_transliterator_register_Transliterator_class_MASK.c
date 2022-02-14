
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int create_object; } ;
typedef TYPE_1__ zend_class_entry ;
struct TYPE_7__ {int write_property; int read_property; int get_property_ptr_ptr; int clone_obj; int free_obj; int offset; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,int ) ;
 int VAR_11 ;
 int FUNC_2 (TYPE_3__*,int *,int) ;
 int VAR_12 ;
 int FUNC_3 (int ,char*,int,int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_13 ;

void FUNC_6( void )
{
 zend_class_entry VAR_14;


 FUNC_0( VAR_14, "Transliterator", VAR_2 );
 VAR_14.create_object = VAR_7;
 VAR_1 = FUNC_5( &VAR_14 );
 FUNC_2( &VAR_5, &VAR_12,
  sizeof VAR_5 );
 VAR_5.offset = FUNC_1(VAR_6, VAR_13);
 VAR_5.free_obj = VAR_8;
 VAR_5.clone_obj = VAR_3;
 VAR_5.get_property_ptr_ptr = VAR_4;
 VAR_5.read_property = VAR_9;
 VAR_5.write_property = VAR_10;


 if( !VAR_1 )
 {
  FUNC_4( VAR_0,
   "Transliterator: attempt to create properties "
   "on a non-registered class." );
  return;
 }
 FUNC_3( VAR_1,
  "id", sizeof( "id" ) - 1, VAR_11 );



}
