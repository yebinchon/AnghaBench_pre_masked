
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,size_t) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static size_t
FUNC_4(size_t VAR_3)
{
 if (VAR_3 > VAR_2)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_3("string too long to represent as jsonb string"),
     FUNC_2("Due to an implementation restriction, jsonb strings cannot exceed %d bytes.",
         VAR_2)));

 return VAR_3;
}
