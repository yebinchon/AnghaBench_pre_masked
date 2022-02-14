
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {int dummy; } ;
struct pl_parser {int add_base; int pl; TYPE_1__* real_stream; scalar_t__ probing; } ;
typedef int files ;
struct TYPE_2__ {int url; int is_directory; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 char* FUNC_1 (struct pl_parser*,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char**,int,int,int ) ;
 int FUNC_4 (struct pl_parser*,char*,struct stat*,int ,char***,int*) ;

__attribute__((used)) static int FUNC_5(struct pl_parser *VAR_2)
{
    if (!VAR_2->real_stream->is_directory)
        return -1;
    if (VAR_2->probing)
        return 0;

    char *VAR_3 = FUNC_1(VAR_2, FUNC_0(VAR_2->real_stream->url));
    if (!VAR_3)
        return -1;

    char **VAR_4 = ((void*)0);
    int VAR_5 = 0;
    struct stat VAR_6[VAR_0];

    FUNC_4(VAR_2, VAR_3, VAR_6, 0, &VAR_4, &VAR_5);

    if (VAR_4)
        FUNC_3(VAR_4, VAR_5, sizeof(VAR_4[0]), VAR_1);

    for (int VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
        FUNC_2(VAR_2->pl, VAR_4[VAR_7]);

    VAR_2->add_base = 0;

    return VAR_5 > 0 ? 0 : -1;
}
