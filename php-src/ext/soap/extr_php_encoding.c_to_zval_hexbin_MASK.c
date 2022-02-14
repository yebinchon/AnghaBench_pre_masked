
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
typedef TYPE_2__* xmlNodePtr ;
typedef int encodeTypePtr ;
struct TYPE_6__ {TYPE_1__* children; } ;
struct TYPE_5__ {scalar_t__ type; unsigned char* content; int * next; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t FUNC_1 (int *) ;
 unsigned char* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (unsigned char*) ;
 int * FUNC_9 (int,int ) ;

__attribute__((used)) static zval *FUNC_10(zval *VAR_3, encodeTypePtr VAR_4, xmlNodePtr VAR_5)
{
 zend_string *VAR_6;
 size_t VAR_7, VAR_8;
 unsigned char VAR_9;

 FUNC_5(VAR_3);
 FUNC_0(VAR_5, VAR_3);
 if (VAR_5 && VAR_5->children) {
  if (VAR_5->children->type == VAR_2 && VAR_5->children->next == ((void*)0)) {
   FUNC_8(VAR_5->children->content);
  } else if (VAR_5->children->type != VAR_1 || VAR_5->children->next != ((void*)0)) {
   FUNC_6(VAR_0, "Encoding: Violation of encoding rules");
   return VAR_3;
  }
  VAR_6 = FUNC_9(FUNC_7((char*)VAR_5->children->content) / 2, 0);
  for (VAR_7 = VAR_8 = 0; VAR_7 < FUNC_1(VAR_6); VAR_7++) {
   VAR_9 = VAR_5->children->content[VAR_8++];
   if (VAR_9 >= '0' && VAR_9 <= '9') {
    FUNC_2(VAR_6)[VAR_7] = (VAR_9 - '0') << 4;
   } else if (VAR_9 >= 'a' && VAR_9 <= 'f') {
    FUNC_2(VAR_6)[VAR_7] = (VAR_9 - 'a' + 10) << 4;
   } else if (VAR_9 >= 'A' && VAR_9 <= 'F') {
    FUNC_2(VAR_6)[VAR_7] = (VAR_9 - 'A' + 10) << 4;
   } else {
    FUNC_6(VAR_0, "Encoding: Violation of encoding rules");
   }
   VAR_9 = VAR_5->children->content[VAR_8++];
   if (VAR_9 >= '0' && VAR_9 <= '9') {
    FUNC_2(VAR_6)[VAR_7] |= VAR_9 - '0';
   } else if (VAR_9 >= 'a' && VAR_9 <= 'f') {
    FUNC_2(VAR_6)[VAR_7] |= VAR_9 - 'a' + 10;
   } else if (VAR_9 >= 'A' && VAR_9 <= 'F') {
    FUNC_2(VAR_6)[VAR_7] |= VAR_9 - 'A' + 10;
   } else {
    FUNC_6(VAR_0, "Encoding: Violation of encoding rules");
   }
  }
  FUNC_2(VAR_6)[FUNC_1(VAR_6)] = '\0';
  FUNC_4(VAR_3, VAR_6);
 } else {
  FUNC_3(VAR_3);
 }
 return VAR_3;
}
