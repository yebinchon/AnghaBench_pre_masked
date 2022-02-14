
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct signal_info {int source; scalar_t__ signal_received; } ;
struct gc_arena {int dummy; } ;
typedef int socket_descriptor_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct gc_arena*) ;
 struct gc_arena FUNC_1 () ;
 int FUNC_2 (scalar_t__*) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (scalar_t__,int ,int *,int *,int *,int *,int *) ;
 int FUNC_4 (int ,char*,int ,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,struct sockaddr const*,int const,scalar_t__*) ;
 int FUNC_7 (struct sockaddr const*,struct gc_arena*) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void
FUNC_9(socket_descriptor_t *VAR_7,
               const struct sockaddr *VAR_8,
               const int VAR_9,
               struct signal_info *VAR_10)
{
    struct gc_arena VAR_11 = FUNC_1();
    int VAR_12;





    FUNC_4(VAR_1, "Attempting to establish TCP connection with %s",
        FUNC_7(VAR_8, &VAR_11));
    VAR_12 = FUNC_6(*VAR_7, VAR_8, VAR_9, &VAR_10->signal_received);

    FUNC_2(&VAR_10->signal_received);
    if (VAR_10->signal_received)
    {
        goto done;
    }

    if (VAR_12)
    {

        FUNC_4(VAR_0, "TCP: connect to %s failed: %s",
            FUNC_7(VAR_8, &VAR_11), FUNC_8(VAR_12));

        FUNC_5(*VAR_7);
        *VAR_7 = VAR_5;
        VAR_10->signal_received = VAR_3;
        VAR_10->source = VAR_4;
    }
    else
    {
        FUNC_4(VAR_1, "TCP connection established with %s",
            FUNC_7(VAR_8, &VAR_11));
    }

done:
    FUNC_0(&VAR_11);
}
