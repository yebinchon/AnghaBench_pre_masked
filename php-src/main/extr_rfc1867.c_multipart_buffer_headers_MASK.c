
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int zend_llist ;
struct TYPE_10__ {int * c; int member_0; } ;
typedef TYPE_1__ smart_string ;
struct TYPE_11__ {int detect_order_size; int detect_order; int input_encoding; int boundary; } ;
typedef TYPE_2__ multipart_buffer ;
struct TYPE_12__ {char* key; int * value; int member_0; } ;
typedef TYPE_3__ mime_header_entry ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 char* FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (char) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 char* FUNC_7 (char*,char) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *,TYPE_3__*) ;
 int FUNC_10 (unsigned char const*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_11(multipart_buffer *VAR_0, zend_llist *VAR_1)
{
 char *VAR_2;
 mime_header_entry VAR_3 = {0};
 smart_string VAR_4 = {0};
 char *VAR_5 = ((void*)0);


 if (!FUNC_1(VAR_0, VAR_0->boundary)) {
  return 0;
 }



 while ((VAR_2 = FUNC_2(VAR_0)) && VAR_2[0] != '\0') {

  char *VAR_6 = ((void*)0);

  if (FUNC_4()) {
   VAR_0->input_encoding = FUNC_10((const unsigned char *) VAR_2, FUNC_8(VAR_2), VAR_0->detect_order, VAR_0->detect_order_size);
  }


  if (!FUNC_3(VAR_2[0])) {
   VAR_6 = FUNC_7(VAR_2, ':');
  }

  if (VAR_6) {
   if (VAR_4.c && VAR_5) {

    FUNC_5(&VAR_4);
    VAR_3.key = VAR_5;
    VAR_3.value = VAR_4.c;
    FUNC_9(VAR_1, &VAR_3);
    VAR_4.c = ((void*)0);
    VAR_5 = ((void*)0);
   }

   *VAR_6 = '\0';
   do { VAR_6++; } while (FUNC_3(*VAR_6));

   VAR_5 = FUNC_0(VAR_2);
   FUNC_6(&VAR_4, VAR_6);
  } else if (VAR_4.c) {
   FUNC_6(&VAR_4, VAR_2);
  } else {
   continue;
  }
 }

 if (VAR_4.c && VAR_5) {

  FUNC_5(&VAR_4);
  VAR_3.key = VAR_5;
  VAR_3.value = VAR_4.c;
  FUNC_9(VAR_1, &VAR_3);
 }

 return 1;
}
