
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int zend_bool ;
typedef TYPE_2__* xmlParserCtxtPtr ;
typedef TYPE_3__* xmlDocPtr ;
struct TYPE_11__ {int * URL; } ;
struct TYPE_10__ {TYPE_3__* myDoc; int * directory; scalar_t__ wellFormed; int options; TYPE_1__* sax; } ;
struct TYPE_9__ {int * error; int * warning; int comment; int ignorableWhitespace; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (void const*,size_t) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;

xmlDocPtr FUNC_6(const void *VAR_3, size_t VAR_4)
{
 xmlParserCtxtPtr VAR_5 = ((void*)0);
 xmlDocPtr VAR_6;





 VAR_5 = FUNC_2(VAR_3, VAR_4);
 if (VAR_5) {
  zend_bool VAR_7;

  VAR_5->sax->ignorableWhitespace = VAR_2;
  VAR_5->sax->comment = VAR_1;
  VAR_5->sax->warning = ((void*)0);
  VAR_5->sax->error = ((void*)0);

  VAR_5->options |= VAR_0;
  VAR_7 = FUNC_0(1);
  FUNC_5(VAR_5);
  FUNC_0(VAR_7);
  if (VAR_5->wellFormed) {
   VAR_6 = VAR_5->myDoc;
   if (VAR_6->URL == ((void*)0) && VAR_5->directory != ((void*)0)) {
    VAR_6->URL = FUNC_1(VAR_5->directory);
   }
  } else {
   VAR_6 = ((void*)0);
   FUNC_3(VAR_5->myDoc);
   VAR_5->myDoc = ((void*)0);
  }
  FUNC_4(VAR_5);
 } else {
  VAR_6 = ((void*)0);
 }
 return VAR_6;
}
