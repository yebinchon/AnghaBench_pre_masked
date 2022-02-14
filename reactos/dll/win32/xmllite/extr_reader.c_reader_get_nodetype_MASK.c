
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nodetype; scalar_t__ attr; } ;
typedef TYPE_1__ xmlreader ;
typedef int XmlNodeType ;


 int VAR_0 ;

__attribute__((used)) static XmlNodeType FUNC_0(const xmlreader *VAR_1)
{



    return VAR_1->attr ? VAR_0 : VAR_1->nodetype;
}
