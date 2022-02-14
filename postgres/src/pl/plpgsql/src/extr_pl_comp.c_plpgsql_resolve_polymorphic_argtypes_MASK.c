
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int Node ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (int,int*,char*,int *) ;

__attribute__((used)) static void
FUNC_4(int VAR_5,
          Oid *VAR_6, char *VAR_7,
          Node *VAR_8, bool VAR_9,
          const char *VAR_10)
{
 int VAR_11;

 if (!VAR_9)
 {

  if (!FUNC_3(VAR_5, VAR_6, VAR_7,
            VAR_8))
   FUNC_0(VAR_1,
     (FUNC_1(VAR_0),
      FUNC_2("could not determine actual argument "
       "type for polymorphic function \"%s\"",
       VAR_10)));
 }
 else
 {

  for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++)
  {
   switch (VAR_6[VAR_11])
   {
    case 131:
    case 129:
    case 130:
     VAR_6[VAR_11] = VAR_3;
     break;
    case 132:
     VAR_6[VAR_11] = VAR_2;
     break;
    case 128:
     VAR_6[VAR_11] = VAR_4;
     break;
    default:
     break;
   }
  }
 }
}
