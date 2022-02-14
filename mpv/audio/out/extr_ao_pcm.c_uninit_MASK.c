
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int data_length; int fp; scalar_t__ waveheader; } ;
struct ao {struct priv* priv; } ;
typedef int HANDLE ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ao*,char*) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct ao*,int ,int) ;

__attribute__((used)) static void FUNC_7(struct ao *VAR_2)
{
    struct priv *VAR_3 = VAR_2->priv;

    if (VAR_3->waveheader) {
        bool VAR_4 = 0;






        if (VAR_4 || FUNC_5(VAR_3->fp, 0, VAR_1) != 0)
            FUNC_1(VAR_2, "Could not seek to start, WAV size headers not updated!\n");
        else {
            if (VAR_3->data_length > 0xfffff000) {
                FUNC_1(VAR_2, "File larger than allowed for "
                       "WAV files, may play truncated!\n");
                VAR_3->data_length = 0xfffff000;
            }
            FUNC_6(VAR_2, VAR_3->fp, VAR_3->data_length);
        }
    }
    FUNC_4(VAR_3->fp);
}
