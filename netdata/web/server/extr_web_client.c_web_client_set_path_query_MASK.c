
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct web_client {size_t url_path_length; char* url_search_path; } ;



__attribute__((used)) static void FUNC_0(struct web_client *VAR_0, char *VAR_1, char *VAR_2) {
    VAR_0->url_path_length = (size_t)(VAR_2 -VAR_1);

    VAR_0->url_search_path = VAR_2;
}
