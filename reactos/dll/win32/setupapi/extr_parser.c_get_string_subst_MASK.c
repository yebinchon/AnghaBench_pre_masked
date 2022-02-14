
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct section {unsigned int nb_lines; struct line* lines; int name; } ;
struct line {int key_field; size_t first_field; int nb_fields; } ;
struct inf_file {int strings_section; unsigned int nb_sections; struct field* fields; struct section** sections; } ;
struct field {char* text; } ;
typedef char WCHAR ;
typedef int TCHAR ;
typedef int Lang ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ,int ,int *,int) ;
 int FUNC_1 () ;
 char* FUNC_2 (int ,int ,unsigned int) ;
 int FUNC_3 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_4 (struct inf_file const*,int,unsigned int*) ;
 int FUNC_5 (char*,char const*,unsigned int) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (char*,int *) ;
 unsigned int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char const*,char*,unsigned int) ;
 int FUNC_10 (char*,char**,int) ;

__attribute__((used)) static const WCHAR *FUNC_11( const struct inf_file *VAR_2, const WCHAR *VAR_3, unsigned int *VAR_4,
                                      BOOL VAR_5 )
{
    static const WCHAR VAR_6 = '%';

    struct section *VAR_7;
    struct line *VAR_8;
    struct field *VAR_9;
    unsigned int VAR_10, VAR_11;
    int VAR_12;
    WCHAR *VAR_13, *VAR_14;
    const WCHAR *VAR_15 = ((void*)0);
    WCHAR VAR_16[13] = {'S','t','r','i','n','g','s','.',0};
    TCHAR VAR_17[5];

    if (!*VAR_4)
    {
        *VAR_4 = 1;
        return &VAR_6;
    }
    if (VAR_2->strings_section == -1) goto not_found;
    VAR_7 = VAR_2->sections[VAR_2->strings_section];
    for (VAR_11 = 0, VAR_8 = VAR_7->lines; VAR_11 < VAR_7->nb_lines; VAR_11++, VAR_8++)
    {
        if (VAR_8->key_field == -1) continue;
        if (FUNC_9( VAR_3, VAR_2->fields[VAR_8->key_field].text, *VAR_4 )) continue;
        if (!VAR_2->fields[VAR_8->key_field].text[*VAR_4]) break;
    }
    if (VAR_11 == VAR_7->nb_lines || !VAR_8->nb_fields) goto not_found;
    VAR_9 = &VAR_2->fields[VAR_8->first_field];
    FUNC_0(VAR_1, VAR_0, VAR_17, sizeof(VAR_17)/sizeof(TCHAR));

    FUNC_7(VAR_16 + 8, VAR_17 + 2);

    for (VAR_10 = 0; VAR_10 < VAR_2->nb_sections; VAR_10++)
    {
        if (!FUNC_6(VAR_2->sections[VAR_10]->name,VAR_16))
        {
            VAR_7 = VAR_2->sections[VAR_10];
            for (VAR_11 = 0, VAR_8 = VAR_7->lines; VAR_11 < VAR_7->nb_lines; VAR_11++, VAR_8++)
            {
                if (VAR_8->key_field == -1) continue;
                if (FUNC_9( VAR_3, VAR_2->fields[VAR_8->key_field].text, *VAR_4 )) continue;
                if (!VAR_2->fields[VAR_8->key_field].text[*VAR_4])
                {
                    VAR_9 = &VAR_2->fields[VAR_8->first_field];
                    break;
                }
            }
        }
    }

    FUNC_7(VAR_16 + 8, VAR_17);

    for (VAR_10 = 0; VAR_10 < VAR_2->nb_sections; VAR_10++)
    {
        if (!FUNC_6(VAR_2->sections[VAR_10]->name,VAR_16))
        {
            VAR_7 = VAR_2->sections[VAR_10];
            for (VAR_11 = 0, VAR_8 = VAR_7->lines; VAR_11 < VAR_7->nb_lines; VAR_11++, VAR_8++)
            {
                if (VAR_8->key_field == -1) continue;
                if (FUNC_9( VAR_3, VAR_2->fields[VAR_8->key_field].text, *VAR_4 )) continue;
                if (!VAR_2->fields[VAR_8->key_field].text[*VAR_4])
                {
                    VAR_9 = &VAR_2->fields[VAR_8->first_field];
                    break;
                }
            }
        }
    }
    *VAR_4 = FUNC_8( VAR_9->text );
    VAR_15 = VAR_9->text;
    return VAR_15;


 not_found:
    if ((VAR_13 = FUNC_2( FUNC_1(), 0, (*VAR_4+1) * sizeof(WCHAR) )))
    {
        FUNC_5( VAR_13, VAR_3, *VAR_4 * sizeof(WCHAR) );
        VAR_13[*VAR_4] = 0;
        VAR_12 = FUNC_10( VAR_13, &VAR_14, 10 );
        if (!*VAR_14) VAR_15 = FUNC_4( VAR_2, VAR_12, VAR_4 );
        if (VAR_5 && VAR_15 && *VAR_4 && VAR_15[*VAR_4 - 1] == '\\') *VAR_4 -= 1;
        FUNC_3( FUNC_1(), 0, VAR_13 );
        return VAR_15;
    }
    return ((void*)0);
}
