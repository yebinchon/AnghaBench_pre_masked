
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int get_iterator; int create_object; } ;
typedef TYPE_1__ zend_class_entry ;
struct TYPE_7__ {int count_elements; int read_dimension; int free_obj; int * clone_obj; int offset; } ;


 int FUNC_0 (TYPE_1__,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__ VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_3__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int ,int,int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4( void )
{
 zend_class_entry VAR_13;

 FUNC_0( VAR_13, "ResourceBundle", VAR_1 );

 VAR_13.create_object = VAR_3;
 VAR_13.get_iterator = VAR_8;

 VAR_0 = FUNC_3( &VAR_13 );

 VAR_5 = VAR_9;
 VAR_5.offset = FUNC_1(VAR_2, VAR_10);
 VAR_5.clone_obj = ((void*)0);
 VAR_5.free_obj = VAR_4;
 VAR_5.read_dimension = VAR_7;
 VAR_5.count_elements = VAR_6;

 FUNC_2(VAR_0, 2, VAR_12, VAR_11);
}
