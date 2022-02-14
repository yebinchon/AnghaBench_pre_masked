
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet_id_persist_file_image {int id; int time; } ;
struct packet_id_persist {int fd; char const* filename; int id_last_written; int id; int time_last_written; int time; } ;
struct gc_arena {int dummy; } ;
typedef int ssize_t ;
typedef int image ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,char*,char const*,int ) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (struct gc_arena*) ;
 struct gc_arena FUNC_3 () ;
 int FUNC_4 (int,char*,char const*) ;
 int FUNC_5 (struct packet_id_persist*) ;
 int FUNC_6 (struct packet_id_persist*,struct gc_arena*) ;
 int FUNC_7 (char const*,int,int) ;
 int FUNC_8 (int,struct packet_id_persist_file_image*,int) ;

void
FUNC_9(struct packet_id_persist *VAR_11, const char *VAR_12)
{
    struct gc_arena VAR_13 = FUNC_3();
    if (!FUNC_5(VAR_11))
    {

        VAR_11->fd = FUNC_7(VAR_12,
                              VAR_7 | VAR_8 | VAR_6,
                              VAR_9 | VAR_10);
        if (VAR_11->fd == -1)
        {
            FUNC_4(VAR_0 | VAR_5,
                "Cannot open --replay-persist file %s for read/write",
                VAR_12);
        }
        else
        {
            struct packet_id_persist_file_image VAR_14;
            ssize_t VAR_15;
            VAR_11->filename = VAR_12;
            VAR_15 = FUNC_8(VAR_11->fd, &VAR_14, sizeof(VAR_14));
            if (VAR_15 == sizeof(VAR_14))
            {
                VAR_11->time = VAR_11->time_last_written = VAR_14.time;
                VAR_11->id = VAR_11->id_last_written = VAR_14.id;
                FUNC_0(VAR_1, "PID Persist Read from %s: %s",
                     VAR_11->filename, FUNC_6(VAR_11, &VAR_13));
            }
            else if (VAR_15 == -1)
            {
                FUNC_4(VAR_0 | VAR_5,
                    "Read error on --replay-persist file %s",
                    VAR_11->filename);
            }
        }
    }
    FUNC_2(&VAR_13);
}
