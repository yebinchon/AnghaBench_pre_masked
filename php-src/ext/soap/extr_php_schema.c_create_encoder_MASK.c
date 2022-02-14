
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int xmlChar ;
struct TYPE_15__ {int s; int member_0; } ;
typedef TYPE_2__ smart_str ;
typedef int sdlTypePtr ;
typedef TYPE_3__* sdlPtr ;
typedef TYPE_4__* encodePtr ;
typedef int encode ;
struct TYPE_14__ {int sdl_type; void* type_str; void* ns; } ;
struct TYPE_17__ {int to_zval; int to_xml; TYPE_1__ details; } ;
struct TYPE_16__ {int * encoders; } ;
typedef int HashTable ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (char*) ;
 int FUNC_3 (TYPE_4__*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,char) ;
 int FUNC_6 (TYPE_2__*,char*) ;
 int FUNC_7 (TYPE_2__*) ;
 TYPE_4__* FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ,int *,int ,int ) ;
 int FUNC_10 (int *,int ,TYPE_4__*) ;

__attribute__((used)) static encodePtr FUNC_11(sdlPtr VAR_3, sdlTypePtr VAR_4, const xmlChar *VAR_5, const xmlChar *VAR_6)
{
 smart_str VAR_7 = {0};
 encodePtr VAR_8, VAR_9;

 if (VAR_3->encoders == ((void*)0)) {
  VAR_3->encoders = FUNC_1(sizeof(HashTable));
  FUNC_9(VAR_3->encoders, 0, ((void*)0), VAR_0, 0);
 }
 FUNC_6(&VAR_7, (char*)VAR_5);
 FUNC_5(&VAR_7, ':');
 FUNC_6(&VAR_7, (char*)VAR_6);
 FUNC_4(&VAR_7);
 if ((VAR_9 = FUNC_8(VAR_3->encoders, VAR_7.s)) != ((void*)0)) {
  VAR_8 = VAR_9;
  if (VAR_8->details.ns) {
   FUNC_0(VAR_8->details.ns);
  }
  if (VAR_8->details.type_str) {
   FUNC_0(VAR_8->details.type_str);
  }
 } else {
  VAR_9 = ((void*)0);
  VAR_8 = FUNC_1(sizeof(encode));
 }
 FUNC_3(VAR_8, 0, sizeof(encode));

 VAR_8->details.ns = FUNC_2((char*)VAR_5);
 VAR_8->details.type_str = FUNC_2((char*)VAR_6);
 VAR_8->details.sdl_type = VAR_4;
 VAR_8->to_xml = VAR_1;
 VAR_8->to_zval = VAR_2;

 if (VAR_9 == ((void*)0)) {
  FUNC_10(VAR_3->encoders, VAR_7.s, VAR_8);
 }
 FUNC_7(&VAR_7);
 return VAR_8;
}
