
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int NamespaceInfo ;
typedef int Archive ;


 int FUNC_0 (char*,int ) ;
 int * FUNC_1 (int ) ;

__attribute__((used)) static NamespaceInfo *
FUNC_2(Archive *VAR_0, Oid VAR_1)
{
 NamespaceInfo *VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 == ((void*)0))
  FUNC_0("schema with OID %u does not exist", VAR_1);
 return VAR_2;
}
