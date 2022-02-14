
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_1__* xmlNodeSetPtr ;
typedef int xmlChar ;
typedef TYPE_2__* xmlBufferPtr ;
struct TYPE_13__ {int doc; } ;
struct TYPE_12__ {int content; } ;
struct TYPE_11__ {int nodeNr; TYPE_3__** nodeTab; } ;


 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (TYPE_2__*,int ,TYPE_3__*,int,int ) ;
 int * FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int * FUNC_7 (TYPE_3__*) ;

__attribute__((used)) static xmlChar *
FUNC_8(xmlNodeSetPtr VAR_0,
       xmlChar *VAR_1,
       xmlChar *VAR_2,
       xmlChar *VAR_3)
{
 xmlBufferPtr VAR_4;
 xmlChar *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_0();

 if ((VAR_1 != ((void*)0)) && (FUNC_6(VAR_1) > 0))
 {
  FUNC_3(VAR_4, "<");
  FUNC_2(VAR_4, VAR_1);
  FUNC_3(VAR_4, ">");
 }
 if (VAR_0 != ((void*)0))
 {
  for (VAR_6 = 0; VAR_6 < VAR_0->nodeNr; VAR_6++)
  {
   if (VAR_3 != ((void*)0))
   {
    FUNC_2(VAR_4,
           FUNC_7(VAR_0->nodeTab[VAR_6]));


    if (VAR_6 < (VAR_0->nodeNr) - 1)
     FUNC_3(VAR_4, (char *) VAR_3);
   }
   else
   {
    if ((VAR_2 != ((void*)0)) && (FUNC_6(VAR_2) > 0))
    {
     FUNC_3(VAR_4, "<");
     FUNC_2(VAR_4, VAR_2);
     FUNC_3(VAR_4, ">");
    }
    FUNC_4(VAR_4,
       VAR_0->nodeTab[VAR_6]->doc,
       VAR_0->nodeTab[VAR_6],
       1, 0);

    if ((VAR_2 != ((void*)0)) && (FUNC_6(VAR_2) > 0))
    {
     FUNC_3(VAR_4, "</");
     FUNC_2(VAR_4, VAR_2);
     FUNC_3(VAR_4, ">");
    }
   }
  }
 }

 if ((VAR_1 != ((void*)0)) && (FUNC_6(VAR_1) > 0))
 {
  FUNC_3(VAR_4, "</");
  FUNC_2(VAR_4, VAR_1);
  FUNC_3(VAR_4, ">");
 }
 VAR_5 = FUNC_5(VAR_4->content);
 FUNC_1(VAR_4);
 return VAR_5;
}
