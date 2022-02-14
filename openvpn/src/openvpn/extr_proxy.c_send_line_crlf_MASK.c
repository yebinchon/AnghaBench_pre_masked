
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer {int dummy; } ;
typedef int socket_descriptor_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct buffer*) ;
 struct buffer FUNC_2 (int) ;
 int FUNC_3 (struct buffer*,char const*,int) ;
 int FUNC_4 (struct buffer*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static bool
FUNC_7(socket_descriptor_t VAR_0,
               const char *VAR_1)
{
    bool VAR_2;

    struct buffer VAR_3 = FUNC_2(FUNC_6(VAR_1) + 3);
    FUNC_0(FUNC_3(&VAR_3, VAR_1, FUNC_6(VAR_1)));
    FUNC_0(FUNC_3(&VAR_3, "\r\n", 3));
    VAR_2 = FUNC_5(VAR_0, FUNC_1(&VAR_3));
    FUNC_4(&VAR_3);
    return VAR_2;
}
