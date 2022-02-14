
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xmlreader ;
struct element {int qname; int localname; int prefix; } ;


 int FUNC_0 (int *,struct element*) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(xmlreader *VAR_0, struct element *VAR_1)
{
    FUNC_1(VAR_0, &VAR_1->prefix);
    FUNC_1(VAR_0, &VAR_1->localname);
    FUNC_1(VAR_0, &VAR_1->qname);
    FUNC_0(VAR_0, VAR_1);
}
