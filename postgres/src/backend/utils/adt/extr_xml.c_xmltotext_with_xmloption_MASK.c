
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xmltype ;
typedef int text ;
typedef scalar_t__ XmlOptionType ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;

text *
FUNC_4(xmltype *VAR_3, XmlOptionType VAR_4)
{
 if (VAR_4 == VAR_2 && !FUNC_3(VAR_3))
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("not an XML document")));


 return (text *) VAR_3;
}
