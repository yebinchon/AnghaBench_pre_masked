
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {int sun_path; } ;
struct sockaddr_storage {int ss_family; } ;
struct sockaddr {int dummy; } ;
struct nn_bipc {int usock; int ep; } ;
typedef int ss ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,struct sockaddr*,int) ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ,int ) ;
 int FUNC_4 (struct sockaddr_storage*,int ,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct nn_bipc*) ;
 char* FUNC_7 (int ) ;
 int FUNC_8 (int *,struct sockaddr*,int) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int ,int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (char const*) ;
 int FUNC_14 (int ,char const*,int) ;
 int FUNC_15 (char const*) ;

__attribute__((used)) static int FUNC_16 (struct nn_bipc *VAR_9)
{
    int VAR_10;
    struct sockaddr_storage VAR_11;
    struct sockaddr_un *VAR_12;
    const char *VAR_13;





    VAR_13 = FUNC_7 (VAR_9->ep);
    FUNC_4 (&VAR_11, 0, sizeof (VAR_11));
    VAR_12 = (struct sockaddr_un*) &VAR_11;
    FUNC_5 (FUNC_13 (VAR_13) < sizeof (VAR_12->sun_path));
    VAR_11.ss_family = VAR_0;
    FUNC_14 (VAR_12->sun_path, VAR_13, sizeof (VAR_12->sun_path));
    VAR_10 = FUNC_10 (&VAR_9->usock, VAR_0, VAR_7, 0);
    if (VAR_10 < 0) {
        return VAR_10;
    }

    VAR_10 = FUNC_8 (&VAR_9->usock,
        (struct sockaddr*) &VAR_11, sizeof (struct sockaddr_un));
    if (VAR_10 < 0) {
        FUNC_11 (&VAR_9->usock);
        return VAR_10;
    }

    VAR_10 = FUNC_9 (&VAR_9->usock, VAR_5);
    if (VAR_10 < 0) {
        FUNC_11 (&VAR_9->usock);
        return VAR_10;
    }
    FUNC_6 (VAR_9);

    return 0;
}
