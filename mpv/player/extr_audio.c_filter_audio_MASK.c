
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_audio_buffer {int dummy; } ;
struct ao_chain {int dummy; } ;
struct MPContext {double play_dir; struct ao_chain* ao_chain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 double VAR_3 ;
 int FUNC_0 (struct MPContext*,struct ao_chain*,int,double,int*) ;
 double FUNC_1 (struct MPContext*) ;

__attribute__((used)) static int FUNC_2(struct MPContext *VAR_4, struct mp_audio_buffer *VAR_5,
                        int VAR_6)
{
    struct ao_chain *VAR_7 = VAR_4->ao_chain;

    double VAR_8 = FUNC_1(VAR_4);
    if (VAR_8 != VAR_3)
        VAR_8 *= VAR_4->play_dir;

    bool VAR_9 = 0;
    if (!FUNC_0(VAR_4, VAR_7, VAR_6, VAR_8, &VAR_9))
        return VAR_2;
    return VAR_9 ? VAR_0 : VAR_1;
}
