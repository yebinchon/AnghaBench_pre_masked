
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_10__ ;


typedef int zval ;
typedef int zend_string ;
struct TYPE_17__ {int ce; } ;
typedef TYPE_1__ zend_object ;
typedef int UTransliterator ;
struct TYPE_18__ {int * utrans; int zo; } ;
typedef TYPE_2__ Transliterator_object ;
struct TYPE_16__ {TYPE_1__* (* create_object ) (int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int * FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_10__* VAR_1 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,TYPE_1__*) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int ,char*,int ) ;
 int FUNC_12 (int *,int ,char*) ;
 TYPE_2__* FUNC_13 (TYPE_1__*) ;
 TYPE_1__* FUNC_14 (int ) ;
 int FUNC_15 (int *,int *,int ) ;
 int FUNC_16 (TYPE_2__*) ;
 int * FUNC_17 (int *,int ) ;
 int FUNC_18 (int *,int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *,char*,int ) ;

__attribute__((used)) static zend_object *FUNC_21( zend_object *VAR_2 )
{
 Transliterator_object *VAR_3,
                       *VAR_4;
 zend_object *VAR_5;
 FUNC_9( ((void*)0) );

 VAR_3 = FUNC_13( VAR_2 );
 FUNC_9( FUNC_1( VAR_3 ) );
 VAR_5 = VAR_1->create_object( VAR_2->ce );
 VAR_4 = FUNC_13( VAR_5 );

 FUNC_18( &VAR_4->zo, &VAR_3->zo );

 if( VAR_3->utrans != ((void*)0) )
 {
  zval VAR_6;


  UTransliterator *VAR_7 = FUNC_17( VAR_3->utrans, FUNC_3( VAR_3 ) );

  if( FUNC_5( FUNC_2( VAR_3 ) ) )
   goto err;

  FUNC_7(&VAR_6, VAR_5);
  FUNC_15( &VAR_6, VAR_7,
   FUNC_3( VAR_3 ) );

  if( FUNC_5( FUNC_2( VAR_3 ) ) )
  {
   zend_string *VAR_8;
err:

   if( VAR_7 != ((void*)0) )
    FUNC_16( VAR_4 );



   FUNC_10( ((void*)0), FUNC_0( VAR_3 ) );
   FUNC_11( FUNC_4( VAR_3 ),
    "Could not clone transliterator", 0 );

   VAR_8 = FUNC_8( FUNC_4( VAR_3 ) );
   FUNC_20( ((void*)0), "%s", FUNC_6(VAR_8) );
   FUNC_19( VAR_8 );

  }
 }
 else
 {

  FUNC_12( ((void*)0), VAR_0,
   "Cloning unconstructed transliterator." );
 }

 return VAR_5;
}
