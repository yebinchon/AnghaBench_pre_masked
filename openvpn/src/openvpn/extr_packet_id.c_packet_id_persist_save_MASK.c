
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet_id_persist_file_image {scalar_t__ time; scalar_t__ id; } ;
struct packet_id_persist {scalar_t__ time; scalar_t__ time_last_written; scalar_t__ id; scalar_t__ id_last_written; int filename; int fd; } ;
struct gc_arena {int dummy; } ;
typedef int ssize_t ;
typedef scalar_t__ off_t ;
typedef int image ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (struct gc_arena*) ;
 struct gc_arena FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,scalar_t__,int ) ;
 int FUNC_4 (int,char*,int ) ;
 scalar_t__ FUNC_5 (struct packet_id_persist*) ;
 int FUNC_6 (struct packet_id_persist*,struct gc_arena*) ;
 int FUNC_7 (int ,struct packet_id_persist_file_image*,int) ;

void
FUNC_8(struct packet_id_persist *VAR_4)
{
    if (FUNC_5(VAR_4) && VAR_4->time && (VAR_4->time != VAR_4->time_last_written
                                                    || VAR_4->id != VAR_4->id_last_written))
    {
        struct packet_id_persist_file_image VAR_5;
        ssize_t VAR_6;
        off_t VAR_7;
        struct gc_arena VAR_8 = FUNC_2();

        VAR_5.time = VAR_4->time;
        VAR_5.id = VAR_4->id;
        VAR_7 = FUNC_3(VAR_4->fd, (off_t)0, VAR_3);
        if (VAR_7 == (off_t)0)
        {
            VAR_6 = FUNC_7(VAR_4->fd, &VAR_5, sizeof(VAR_5));
            if (VAR_6 == sizeof(VAR_5))
            {
                VAR_4->time_last_written = VAR_4->time;
                VAR_4->id_last_written = VAR_4->id;
                FUNC_0(VAR_1, "PID Persist Write to %s: %s",
                     VAR_4->filename, FUNC_6(VAR_4, &VAR_8));
            }
            else
            {
                FUNC_4(VAR_0 | VAR_2,
                    "Cannot write to --replay-persist file %s",
                    VAR_4->filename);
            }
        }
        else
        {
            FUNC_4(VAR_0 | VAR_2,
                "Cannot seek to beginning of --replay-persist file %s",
                VAR_4->filename);
        }
        FUNC_1(&VAR_8);
    }
}
