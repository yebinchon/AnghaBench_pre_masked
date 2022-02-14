
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_transport {char const* name; } ;
struct nn_sock {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_0 (char const*,char const*,size_t) ;
 int FUNC_1 (struct nn_sock*,struct nn_transport const*,int,char const*) ;
 struct nn_transport** VAR_4 ;
 char* FUNC_2 (char const*,char) ;
 size_t FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4 (struct nn_sock *VAR_5, const char *VAR_6,
    int VAR_7)
{
    int VAR_8;
    const char *VAR_9;
    const char *VAR_10;
    size_t VAR_11;
    const struct nn_transport *VAR_12;
    int VAR_13;


    if (!VAR_6)
        return -VAR_0;
    if (FUNC_3 (VAR_6) >= VAR_3)
        return -VAR_1;


    VAR_9 = VAR_6;
    VAR_10 = FUNC_2 (VAR_6, ':');
    if (!VAR_10)
        return -VAR_0;
    if (VAR_10 [1] != '/' || VAR_10 [2] != '/')
        return -VAR_0;
    VAR_11 = VAR_10 - VAR_6;
    VAR_6 += VAR_11 + 3;


    VAR_12 = ((void*)0);
    for (VAR_13 = 0; ((VAR_12 = VAR_4[VAR_13]) != ((void*)0)); VAR_13++) {
        if (FUNC_3 (VAR_12->name) == VAR_11 &&
              FUNC_0 (VAR_12->name, VAR_9, VAR_11) == 0)
            break;
    }


    if (VAR_12 == ((void*)0)) {
        return -VAR_2;
    }


    VAR_8 = FUNC_1 (VAR_5, VAR_12, VAR_7, VAR_6);
    return VAR_8;
}
