
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct interface_info {int rfdesc; } ;
struct hardware {int dummy; } ;
typedef int ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int ,struct sockaddr*,int*) ;

ssize_t FUNC_1(struct interface_info *VAR_2,
                       unsigned char *VAR_3,
                       size_t VAR_4,
                       struct sockaddr_in *VAR_5,
                       struct hardware *VAR_6 ) {
    int VAR_7 = sizeof(*VAR_5);
    int VAR_8;

    if (VAR_4 > VAR_0)
        return VAR_1;

    VAR_8 =
        FUNC_0 (VAR_2 -> rfdesc, (char *)VAR_3, (int)VAR_4, 0,
                  (struct sockaddr *)VAR_5, &VAR_7 );
    return VAR_8;
}
