
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ao_push_state {int paused; int final_chunk; int still_playing; int lock; scalar_t__ expected_end_time; int buffer; } ;
struct ao {struct ao_push_state* api_priv; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct ao*,char*,int,int,int) ;
 int FUNC_2 (int ,void**,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ao*) ;

__attribute__((used)) static int FUNC_7(struct ao *VAR_1, void **VAR_2, int VAR_3, int VAR_4)
{
    struct ao_push_state *VAR_5 = VAR_1->api_priv;

    FUNC_4(&VAR_5->lock);

    int VAR_6 = FUNC_3(VAR_5->buffer);
    VAR_6 = FUNC_0(VAR_6, VAR_3);

    FUNC_1(VAR_1, "samples=%d flags=%d r=%d\n", VAR_3, VAR_4, VAR_6);

    if (VAR_6 < VAR_3)
        VAR_4 = VAR_4 & ~VAR_0;
    bool VAR_7 = VAR_4 & VAR_0;

    FUNC_2(VAR_5->buffer, VAR_2, VAR_3);

    bool VAR_8 = VAR_6 > 0 || VAR_5->paused || VAR_5->final_chunk != VAR_7;

    VAR_5->final_chunk = VAR_7;
    VAR_5->paused = 0;
    if (VAR_8) {
        VAR_5->still_playing = 1;
        VAR_5->expected_end_time = 0;



        FUNC_6(VAR_1);
    }
    FUNC_5(&VAR_5->lock);
    return VAR_6;
}
