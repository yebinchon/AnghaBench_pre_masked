
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


typedef int zval ;
typedef TYPE_2__* xmlNodePtr ;
typedef int xmlBufferPtr ;
struct TYPE_17__ {int s; int member_0; } ;
typedef TYPE_3__ smart_str ;
typedef TYPE_4__* sdlTypePtr ;
typedef int encodeTypePtr ;
struct TYPE_18__ {scalar_t__ encode; } ;
struct TYPE_16__ {scalar_t__ name; TYPE_1__* ns; } ;
struct TYPE_15__ {scalar_t__ href; } ;
struct TYPE_14__ {scalar_t__ elements; } ;


 TYPE_13__* FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int * FUNC_2 (int *,scalar_t__,TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,char) ;
 int FUNC_5 (TYPE_3__*,char*) ;
 int FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int *,TYPE_2__*,int ,int ) ;
 TYPE_4__* FUNC_11 (scalar_t__,int ) ;

__attribute__((used)) static zval *FUNC_12(zval *VAR_1, encodeTypePtr VAR_2, xmlNodePtr VAR_3)
{
 xmlBufferPtr VAR_4;

 if (FUNC_0(VAR_0) && FUNC_0(VAR_0)->elements && VAR_3->name) {
  smart_str VAR_5 = {0};
  sdlTypePtr VAR_6;

  if (VAR_3->ns && VAR_3->ns->href) {
   FUNC_5(&VAR_5, (char*)VAR_3->ns->href);
   FUNC_4(&VAR_5, ':');
  }
  FUNC_5(&VAR_5, (char*)VAR_3->name);
  FUNC_3(&VAR_5);

  if ((VAR_6 = FUNC_11(FUNC_0(VAR_0)->elements, VAR_5.s)) != ((void*)0) &&
      VAR_6->encode) {
   FUNC_6(&VAR_5);
   return FUNC_2(VAR_1, VAR_6->encode, VAR_3);
  }
  FUNC_6(&VAR_5);
 }

 VAR_4 = FUNC_8();
 FUNC_10(VAR_4, ((void*)0), VAR_3, 0, 0);
 FUNC_1(VAR_1, (char*)FUNC_7(VAR_4));
 FUNC_9(VAR_4);
 return VAR_1;
}
