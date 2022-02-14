
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct X500TokenW {int end; int start; } ;
struct KeynameKeeper {int keyLen; char* keyName; } ;
typedef int WCHAR ;
typedef int DWORD ;


 int FUNC_0 (struct KeynameKeeper*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int,int) ;

__attribute__((used)) static void FUNC_5(struct KeynameKeeper *VAR_0,
 const struct X500TokenW *VAR_1)
{
    DWORD VAR_2 = VAR_1->end - VAR_1->start;

    if (VAR_2 >= VAR_0->keyLen)
    {
        FUNC_0( VAR_0 );
        VAR_0->keyLen = VAR_2 + 1;
        VAR_0->keyName = FUNC_1(VAR_0->keyLen * sizeof(WCHAR));
    }
    FUNC_4(VAR_0->keyName, VAR_1->start, VAR_2 * sizeof(WCHAR));
    VAR_0->keyName[VAR_2] = '\0';
    FUNC_2("Keyname is %s\n", FUNC_3(VAR_0->keyName));
}
