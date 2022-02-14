
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int,int *) ;

__attribute__((used)) static int
FUNC_11(FILE *VAR_1, char *VAR_2, size_t VAR_3)
{

    char *VAR_4;
    char *VAR_5;
    int VAR_6;
    int VAR_7;
    VAR_6 = FUNC_9(VAR_1);
    if (VAR_6 == VAR_0) {
        return VAR_0;
    }

    while (FUNC_8(VAR_6)) {
        VAR_6 = FUNC_9(VAR_1);
    }


    VAR_4 = VAR_2;


    do { if (VAR_6 == '+' || VAR_6 == '-') do { if (VAR_6 == VAR_0 || VAR_4 >= VAR_2 + VAR_3 - 1) goto buffer_filled; *VAR_4++ = (char)VAR_6; VAR_6 = FUNC_9(VAR_1); } while (0); } while (0);


    if (VAR_6 == 'n' || VAR_6 == 'N') {
        do { if (VAR_6 == VAR_0 || VAR_4 >= VAR_2 + VAR_3 - 1) goto buffer_filled; *VAR_4++ = (char)VAR_6; VAR_6 = FUNC_9(VAR_1); } while (0);
        do { for (VAR_5=("an"); *VAR_5!='\0' && (VAR_6==*VAR_5 || VAR_6+('a'-'A')==*VAR_5); ++VAR_5) do { if (VAR_6 == VAR_0 || VAR_4 >= VAR_2 + VAR_3 - 1) goto buffer_filled; *VAR_4++ = (char)VAR_6; VAR_6 = FUNC_9(VAR_1); } while (0); if (*VAR_5 != '\0') goto buffer_filled; } while (0);


        if (VAR_6 == '(') {
            do { if (VAR_6 == VAR_0 || VAR_4 >= VAR_2 + VAR_3 - 1) goto buffer_filled; *VAR_4++ = (char)VAR_6; VAR_6 = FUNC_9(VAR_1); } while (0);
            while (FUNC_6(VAR_6) || VAR_6 == '_') { do { if (VAR_6 == VAR_0 || VAR_4 >= VAR_2 + VAR_3 - 1) goto buffer_filled; *VAR_4++ = (char)VAR_6; VAR_6 = FUNC_9(VAR_1); } while (0); };
            if (VAR_6 == ')') {
                do { if (VAR_6 == VAR_0 || VAR_4 >= VAR_2 + VAR_3 - 1) goto buffer_filled; *VAR_4++ = (char)VAR_6; VAR_6 = FUNC_9(VAR_1); } while (0);
            }
        }
        goto buffer_filled;
    }
    else if (VAR_6 == 'i' || VAR_6 == 'I') {
        do { if (VAR_6 == VAR_0 || VAR_4 >= VAR_2 + VAR_3 - 1) goto buffer_filled; *VAR_4++ = (char)VAR_6; VAR_6 = FUNC_9(VAR_1); } while (0);
        do { for (VAR_5=("nfinity"); *VAR_5!='\0' && (VAR_6==*VAR_5 || VAR_6+('a'-'A')==*VAR_5); ++VAR_5) do { if (VAR_6 == VAR_0 || VAR_4 >= VAR_2 + VAR_3 - 1) goto buffer_filled; *VAR_4++ = (char)VAR_6; VAR_6 = FUNC_9(VAR_1); } while (0); if (*VAR_5 != '\0') goto buffer_filled; } while (0);
        goto buffer_filled;
    }


    while (FUNC_7(VAR_6)) { do { if (VAR_6 == VAR_0 || VAR_4 >= VAR_2 + VAR_3 - 1) goto buffer_filled; *VAR_4++ = (char)VAR_6; VAR_6 = FUNC_9(VAR_1); } while (0); };

    if (VAR_6 == '.') {
        do { if (VAR_6 == VAR_0 || VAR_4 >= VAR_2 + VAR_3 - 1) goto buffer_filled; *VAR_4++ = (char)VAR_6; VAR_6 = FUNC_9(VAR_1); } while (0);
        do { VAR_7 = 0; while (FUNC_7(VAR_6)) { do { if (VAR_6 == VAR_0 || VAR_4 >= VAR_2 + VAR_3 - 1) goto buffer_filled; *VAR_4++ = (char)VAR_6; VAR_6 = FUNC_9(VAR_1); } while (0); VAR_7 = 1; } if (!VAR_7) goto buffer_filled; } while (0);
    }


    if (VAR_6 == 'e' || VAR_6 == 'E') {
        do { if (VAR_6 == VAR_0 || VAR_4 >= VAR_2 + VAR_3 - 1) goto buffer_filled; *VAR_4++ = (char)VAR_6; VAR_6 = FUNC_9(VAR_1); } while (0);
        do { if (VAR_6 == '+' || VAR_6 == '-') do { if (VAR_6 == VAR_0 || VAR_4 >= VAR_2 + VAR_3 - 1) goto buffer_filled; *VAR_4++ = (char)VAR_6; VAR_6 = FUNC_9(VAR_1); } while (0); } while (0);
        do { VAR_7 = 0; while (FUNC_7(VAR_6)) { do { if (VAR_6 == VAR_0 || VAR_4 >= VAR_2 + VAR_3 - 1) goto buffer_filled; *VAR_4++ = (char)VAR_6; VAR_6 = FUNC_9(VAR_1); } while (0); VAR_7 = 1; } if (!VAR_7) goto buffer_filled; } while (0);
    }

    goto buffer_filled;

buffer_filled:

    FUNC_10(VAR_6, VAR_1);
    *VAR_4 = '\0';


    return (VAR_2 == VAR_4) ? 0 : 1;
}
