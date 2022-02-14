
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_10__ ;


typedef int zval ;
typedef TYPE_2__* xmlNsPtr ;
typedef TYPE_3__* xmlNodePtr ;
typedef TYPE_4__* xmlAttrPtr ;
struct TYPE_24__ {int s; int member_0; } ;
typedef TYPE_5__ smart_str ;
typedef TYPE_6__* encodePtr ;
struct TYPE_19__ {char* type_str; char* ns; } ;
struct TYPE_25__ {TYPE_10__ details; int * (* to_zval ) (int *,TYPE_10__*,TYPE_3__*) ;} ;
struct TYPE_23__ {TYPE_1__* children; } ;
struct TYPE_22__ {int doc; int properties; } ;
struct TYPE_21__ {scalar_t__ href; } ;
struct TYPE_20__ {int content; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 TYPE_4__* FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int ,char**,char**) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*,char) ;
 int FUNC_7 (TYPE_5__*,char*) ;
 int FUNC_8 (TYPE_5__*) ;
 int * FUNC_9 (int *,TYPE_10__*,TYPE_3__*) ;
 int VAR_1 ;
 TYPE_2__* FUNC_10 (int ,TYPE_3__*,int ) ;
 TYPE_6__* FUNC_11 (scalar_t__,int ) ;

__attribute__((used)) static zval *FUNC_12(zval *VAR_2, encodePtr VAR_3, xmlNodePtr VAR_4)
{
 if (FUNC_1(VAR_1)) {
  if (VAR_3->details.type_str) {
   smart_str VAR_5 = {0};
   encodePtr VAR_6;

   if (VAR_3->details.ns) {
    FUNC_7(&VAR_5, VAR_3->details.ns);
    FUNC_6(&VAR_5, ':');
   }
   FUNC_7(&VAR_5, VAR_3->details.type_str);
   FUNC_5(&VAR_5);
   if ((VAR_6 = FUNC_11(FUNC_1(VAR_1), VAR_5.s)) != ((void*)0)) {
    VAR_3 = VAR_6;
   }
   FUNC_8(&VAR_5);
  } else {
   xmlAttrPtr VAR_7 = FUNC_3(VAR_4->properties,"type", VAR_0);

   if (VAR_7 != ((void*)0)) {
    encodePtr VAR_8;
    xmlNsPtr VAR_9;
    char *VAR_10, *VAR_11;
    smart_str VAR_12 = {0};

    FUNC_4(VAR_7->children->content, &VAR_11, &VAR_10);
    VAR_9 = FUNC_10(VAR_4->doc, VAR_4, FUNC_0(VAR_10));
    if (VAR_9 != ((void*)0)) {
     FUNC_7(&VAR_12, (char*)VAR_9->href);
     FUNC_6(&VAR_12, ':');
    }
    FUNC_7(&VAR_12, VAR_11);
    FUNC_5(&VAR_12);
    FUNC_2(VAR_11);
    if (VAR_10) {FUNC_2(VAR_10);}
    if ((VAR_8 = FUNC_11(FUNC_1(VAR_1), VAR_12.s)) != ((void*)0)) {
     VAR_3 = VAR_8;
    }
    FUNC_8(&VAR_12);
   }
  }
 }
 if (VAR_3->to_zval) {
  VAR_2 = VAR_3->to_zval(VAR_2, &VAR_3->details, VAR_4);
 }
 return VAR_2;
}
