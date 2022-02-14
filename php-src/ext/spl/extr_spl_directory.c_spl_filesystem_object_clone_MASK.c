
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_22__ {int ce; } ;
typedef TYPE_5__ zend_object ;
struct TYPE_18__ {int d_name; } ;
struct TYPE_19__ {int index; TYPE_1__ entry; } ;
struct TYPE_20__ {TYPE_2__ dir; } ;
struct TYPE_23__ {int type; TYPE_4__* oth_handler; int oth; int info_class; int file_class; TYPE_3__ u; int flags; void* _path; int file_name_len; void* file_name; int _path_len; } ;
typedef TYPE_6__ spl_filesystem_object ;
struct TYPE_21__ {int (* clone ) (TYPE_6__*,TYPE_6__*) ;} ;


 int VAR_0 ;



 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (void*,int ) ;
 int FUNC_3 (TYPE_6__*,void*) ;
 int FUNC_4 (TYPE_6__*) ;
 TYPE_6__* FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (int ) ;
 TYPE_5__* FUNC_7 (int ) ;
 int FUNC_8 (TYPE_6__*,TYPE_6__*) ;
 int FUNC_9 (TYPE_5__*,TYPE_5__*) ;

__attribute__((used)) static zend_object *FUNC_10(zend_object *VAR_1)
{
 zend_object *VAR_2;
 spl_filesystem_object *VAR_3;
 spl_filesystem_object *VAR_4;
 int VAR_5, VAR_6;

 VAR_4 = FUNC_5(VAR_1);
 VAR_2 = FUNC_7(VAR_1->ce);
 VAR_3 = FUNC_5(VAR_2);

 VAR_3->flags = VAR_4->flags;

 switch (VAR_4->type) {
  case 128:
   VAR_3->_path_len = VAR_4->_path_len;
   VAR_3->_path = FUNC_2(VAR_4->_path, VAR_4->_path_len);
   VAR_3->file_name_len = VAR_4->file_name_len;
   VAR_3->file_name = FUNC_2(VAR_4->file_name, VAR_3->file_name_len);
   break;
  case 130:
   FUNC_3(VAR_3, VAR_4->_path);

   VAR_6 = FUNC_0(VAR_4->flags, VAR_0);
   for(VAR_5 = 0; VAR_5 < VAR_4->u.dir.index; ++VAR_5) {
    do {
     FUNC_4(VAR_3);
    } while (VAR_6 && FUNC_6(VAR_3->u.dir.entry.d_name));
   }
   VAR_3->u.dir.index = VAR_5;
   break;
  case 129:
   FUNC_1(0);
 }

 VAR_3->file_class = VAR_4->file_class;
 VAR_3->info_class = VAR_4->info_class;
 VAR_3->oth = VAR_4->oth;
 VAR_3->oth_handler = VAR_4->oth_handler;

 FUNC_9(VAR_2, VAR_1);

 if (VAR_3->oth_handler && VAR_3->oth_handler->clone) {
  VAR_3->oth_handler->clone(VAR_4, VAR_3);
 }

 return VAR_2;
}
