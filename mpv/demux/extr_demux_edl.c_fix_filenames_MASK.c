
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_parts {int num_parts; struct tl_part* parts; } ;
struct tl_part {int filename; } ;
struct bstr {int dummy; } ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int ) ;
 struct bstr FUNC_2 (char*) ;
 int FUNC_3 (struct tl_parts*,struct bstr,int ) ;

__attribute__((used)) static void FUNC_4(struct tl_parts *VAR_0, char *VAR_1)
{
    struct bstr VAR_2 = FUNC_2(VAR_1);
    for (int VAR_3 = 0; VAR_3 < VAR_0->num_parts; VAR_3++) {
        struct tl_part *VAR_4 = &VAR_0->parts[VAR_3];
        char *VAR_5 = FUNC_1(VAR_4->filename);
        VAR_4->filename = FUNC_3(VAR_0, VAR_2, FUNC_0(VAR_5));
    }
}
