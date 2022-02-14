
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct CommandLineOptions {int shutdown_delay; int* remote_system; int* message; void* force; void* shutdown; void* restart; void* logoff; void* show_gui; void* hibernate; void* document_reason; void* reason; void* abort; } ;
typedef int WCHAR ;
typedef int DWORD ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_1 (int*) ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int*) ;

__attribute__((used)) static DWORD
FUNC_5(struct CommandLineOptions* VAR_10, int VAR_11, WCHAR *VAR_12[])
{
    int VAR_13;

    if (!VAR_10)
        return VAR_2;


    VAR_10->abort = VAR_4;
    VAR_10->force = VAR_4;
    VAR_10->logoff = VAR_4;
    VAR_10->restart = VAR_4;
    VAR_10->shutdown = VAR_4;
    VAR_10->document_reason = VAR_4;
    VAR_10->hibernate = VAR_4;
    VAR_10->shutdown_delay = 30;
    VAR_10->remote_system = ((void*)0);
    VAR_10->reason = FUNC_1(((void*)0));
    VAR_10->message = ((void*)0);
    VAR_10->show_gui = VAR_4;





    for (VAR_13 = 1; VAR_13 < VAR_11; VAR_13++)
    {
        if (VAR_12[VAR_13][0] == L'-' || VAR_12[VAR_13][0] == L'/')
        {
            switch (FUNC_3(VAR_12[VAR_13][1]))
            {
                case L'?':
                    FUNC_0(VAR_8, VAR_6);
                    return VAR_3;

                case L'a':
                    VAR_10->abort = VAR_9;
                    break;

                case L'c':
                    if (VAR_13+1 >= VAR_11)
                        return VAR_1;
                    if (!VAR_12[VAR_13+1] || FUNC_4(VAR_12[VAR_13+1]) <= 512)
                    {
                        VAR_10->message = VAR_12[VAR_13+1];
                        VAR_13++;
                    }
                    else
                    {
                        FUNC_0(VAR_7, VAR_5);
                        return VAR_0;
                    }
                    break;

                case L'd':
                    if (VAR_13+1 >= VAR_11)
                        return VAR_1;
                    VAR_10->reason = FUNC_1(VAR_12[VAR_13+1]);
                    VAR_13++;
                    break;

                case L'e':

                    VAR_10->document_reason = VAR_9;
                    break;

                case L'f':
                    VAR_10->force = VAR_9;
                    break;

                case L'h':
                    VAR_10->hibernate = VAR_9;
                    break;

                case L'i':
                    VAR_10->show_gui = VAR_9;
                    break;

                case L'l':
                    VAR_10->logoff = VAR_9;
                    break;

                case L'm':
                    if (VAR_13+1 >= VAR_11)
                        return VAR_1;
                    VAR_10->remote_system = VAR_12[VAR_13+1];
                    VAR_13++;
                    break;

                case L'p':
                    VAR_10->force = VAR_9;
                    VAR_10->shutdown_delay = 0;
                    break;

                case L'r':
                    VAR_10->restart = VAR_9;
                    break;

                case L's':
                    VAR_10->shutdown = VAR_9;
                    break;

                case L't':
                    if (VAR_13+1 >= VAR_11)
                        return VAR_1;
                    VAR_10->shutdown_delay = FUNC_2(VAR_12[VAR_13+1]);
                    if (VAR_10->shutdown_delay > 0)
                        VAR_10->force = VAR_9;
                    VAR_13++;
                    break;

                default:

                    FUNC_0(VAR_8, VAR_6);
                    return VAR_3;
            }
        }
    }

    return VAR_3;
}
