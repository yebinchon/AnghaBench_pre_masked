
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__ SHORT ;
typedef scalar_t__ MMRESULT ;
typedef int HANDLE ;


 int FUNC_0 (int *,int ,int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int ,scalar_t__,int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int *,char*,scalar_t__) ;

MMRESULT FUNC_5()
{



    FUNC_2("Finding devices\n");





    SHORT VAR_9;
    HANDLE VAR_10;
    WCHAR VAR_11[VAR_6];

    for (VAR_9=0; FUNC_3(VAR_8, VAR_9, &VAR_10, VAR_2) == VAR_3; VAR_9++)
    {
        FUNC_4(VAR_11, L"WaveOut%d\0", VAR_9);
        FUNC_1(VAR_10);
        FUNC_0(&VAR_1, VAR_8, 0, VAR_11);
    }

    for (VAR_9=0; FUNC_3(VAR_7, VAR_9, &VAR_10, VAR_2) == VAR_3; VAR_9++)
    {
        FUNC_4(VAR_11, L"WaveIn%d\0", VAR_9);
        FUNC_1(VAR_10);
        FUNC_0(&VAR_1, VAR_7, 0, VAR_11);
    }

    for (VAR_9=0; FUNC_3(VAR_5, VAR_9, &VAR_10, VAR_2) == VAR_3; VAR_9++)
    {
        FUNC_4(VAR_11, L"MidiOut%d\0", VAR_9);
        FUNC_1(VAR_10);
        FUNC_0(&VAR_1, VAR_5, 0, VAR_11);
    }

    for (VAR_9=0; FUNC_3(VAR_4, VAR_9, &VAR_10, VAR_2) == VAR_3; VAR_9++)
    {
        FUNC_4(VAR_11, L"MidiIn%d\0", VAR_9);
        FUNC_1(VAR_10);
        FUNC_0(&VAR_1, VAR_4, 0, VAR_11);
    }

    for (VAR_9=0; FUNC_3(VAR_0, VAR_9, &VAR_10, VAR_2) == VAR_3; VAR_9++)
    {
        FUNC_4(VAR_11, L"Aux%d\0", VAR_9);
        FUNC_1(VAR_10);
        FUNC_0(&VAR_1, VAR_0, 0, VAR_11);
    }







    return VAR_3;
}
